import numpy as np
import os
import cv2
from skimage.exposure import rescale_intensity
from skimage.segmentation import slic
from skimage.util import img_as_float
from skimage import io


def noisy(noise_typ,image):
   if noise_typ == "gauss":
      row,col,ch= image.shape
      mean = 0
      var = 0.1
      sigma = var**0.5
      gauss = np.random.normal(mean,sigma,(row,col,ch))
      gauss = gauss.reshape(row,col,ch)
      noisy = image + gauss
      return noisy
   elif noise_typ == "s&p":
      row,col,ch = image.shape
      s_vs_p = 0.5
      amount = 0.004
      out = np.copy(image)
      # Salt mode
      num_salt = np.ceil(amount * image.size * s_vs_p)
      coords = [np.random.randint(0, i - 1, int(num_salt))
              for i in image.shape]
      out[coords] = 1

      # Pepper mode
      num_pepper = np.ceil(amount* image.size * (1. - s_vs_p))
      coords = [np.random.randint(0, i - 1, int(num_pepper))
              for i in image.shape]
      out[coords] = 0
      return out
  elif noise_typ == "poisson":
      vals = len(np.unique(image))
      vals = 2 ** np.ceil(np.log2(vals))
      noisy = np.random.poisson(image * vals) / float(vals)
      return noisy
  elif noise_typ =="speckle":
      row,col,ch = image.shape
      gauss = np.random.randn(row,col,ch)
      gauss = gauss.reshape(row,col,ch)
      noisy = image + image * gauss
      return noisy

Folder_name="augmented_image_noise"
Extension=".jpg"

def sharpen_image(image,file_name):
    kernel = np.array([[0, -1, 0], [-1, 5, -1], [0, -1, 0]])
    image = cv2.filter2D(image, -1, kernel)
    cv2.imwrite(Folder_name+ '/' + file_name +"_Sharpen-"+Extension, image)

def emboss_image(image,file_name):
    kernel_emboss_1=np.array([[0,-1,-1],[1,0,-1],[1,1,0]])
    image = cv2.filter2D(image, -1, kernel_emboss_1)+128
    cv2.imwrite(Folder_name + '/' + file_name + "_Emboss-" + Extension, image)

def edge_image(image,ksize,file_name):
    image = cv2.Sobel(image,cv2.CV_16U,1,0,ksize=ksize)
    cv2.imwrite(Folder_name + '/' + file_name + "_Edge-"+str(ksize) + Extension, image)

def addeptive_gaussian_noise(image,file_name):
    h,s,v=cv2.split(image)
    s = cv2.adaptiveThreshold(s, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY_INV, 11, 2)
    h = cv2.adaptiveThreshold(h, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY_INV, 11, 2)
    v = cv2.adaptiveThreshold(v, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY_INV, 11, 2)
    image=cv2.merge([h,s,v])
    cv2.imwrite(Folder_name+ '/' + file_name  + "_Addeptive_gaussian_noise-" + Extension, image)

def salt_image(image,p,a,file_name):
    noisy=image
    num_salt = np.ceil(a * image.size * p)
    coords = [np.random.randint(0, i - 1, int(num_salt))
              for i in image.shape]
    noisy[coords] = 1
    cv2.imwrite(Folder_name + '/' + file_name + "_Salt-"+str(p)+"*"+str(a) + Extension, image)

def paper_image(image,p,a,file_name):
    noisy=image
    num_pepper = np.ceil(a * image.size * (1. - p))
    coords = [np.random.randint(0, i - 1, int(num_pepper))
              for i in image.shape]
    noisy[coords] = 0
    cv2.imwrite(Folder_name+ '/' + file_name  + "_Paper-" + str(p) + "*" + str(a) + Extension, image)

def salt_and_paper_image(image,p,a,file_name):
    noisy=image
    #salt
    num_salt = np.ceil(a * image.size * p)
    coords = [np.random.randint(0, i - 1, int(num_salt))
              for i in image.shape]
    noisy[coords] = 1

    #paper
    num_pepper = np.ceil(a * image.size * (1. - p))
    coords = [np.random.randint(0, i - 1, int(num_pepper))
              for i in image.shape]
    noisy[coords] = 0
    cv2.imwrite(Folder_name + '/' + file_name + "_Salt_And_Paper-" + str(p) + "*" + str(a) + Extension, image)

def contrast_image(image,contrast,file_name):
    image = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
    image[:,:,2] = [[max(pixel - contrast, 0) if pixel < 190 else min(pixel + contrast, 255) for pixel in row] for row in image[:,:,2]]
    image= cv2.cvtColor(image, cv2.COLOR_HSV2BGR)
    cv2.imwrite(Folder_name + '/' + file_name + "_Contrast-" + str(contrast) + Extension, image)

def edge_detect_canny_image(image,th1,th2,file_name):
    image = cv2.Canny(image,th1,th2)
    cv2.imwrite(Folder_name + '/' + file_name + "_Edge Canny-" + str(th1) + "*" + str(th2) + Extension, image)

def grayscale_image(image,file_name):
    image= cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    cv2.imwrite(Folder_name + '/' + file_name + "_Grayscale-" + Extension, image)


if __name__== "__main__":
    path_folder = 'Data_Folder_Img'

    for folder, _, file_name in os.walk(path_folder):
        name = file_name.split('.')[0] # Example get name video...
        print("****"+ name + "****")
        image=cv2.imread(path_folder + "/" + image_file)

        sharpen_image(image,name)
        emboss_image(image,name)

        edge_image(image,1,name)
        edge_image(image,3,name)
        edge_image(image,5,name)
        edge_image(image,9,name)

        addeptive_gaussian_noise(image,name)

        salt_image(image,0.5,0.009,name)
        salt_image(image,0.5,0.09,name)
        salt_image(image,0.5,0.9,name)


        paper_image(image,0.5,0.009,name)
        paper_image(image,0.5,0.09,name)
        paper_image(image,0.5,0.9,name)

        salt_and_paper_image(image,0.5,0.009,name)
        salt_and_paper_image(image,0.5,0.09,name)
        salt_and_paper_image(image,0.5,0.9,name)

        contrast_image(image,25,name)
        contrast_image(image,50,name)
        contrast_image(image,100,name)

        edge_detect_canny_image(image,100,200,name)
        edge_detect_canny_image(image,200,400,name)

        grayscale_image(image,name)
