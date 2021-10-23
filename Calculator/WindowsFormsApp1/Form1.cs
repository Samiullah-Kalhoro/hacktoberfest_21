using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    

    public partial class Form1 : Form
    {
        public int x = 0;
        public int y = 0;
        public int choice = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            screen.Text = screen.Text + "3";
        }

        private void button11_Click(object sender, EventArgs e)
        {
            x =int.Parse(screen.Text);
            screen.Text = "";
            choice = 1;
        }

        private void button15_Click(object sender, EventArgs e)
        {
            x = int.Parse(screen.Text);
            screen.Text = "";
            choice = 3;
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button7_Click(object sender, EventArgs e)
        {
            screen.Text=screen.Text+"1";
        }

        private void button16_Click(object sender, EventArgs e)
        {
            y = int.Parse(screen.Text);
            int result = 0;
            switch (choice)
            {
                case 1:
                     result = x + y;
                    break;
                case 2:
                     result = x - y;
                    break;
                case 3:
                     result = x * y;
                    break;
                case 4:
                    result = x / y;
                    break;

                default:

                    break;
            }
            screen.Text = result.ToString();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            screen.Text = screen.Text + "2";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            screen.Text = screen.Text + "4";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            screen.Text = screen.Text + "5";
        }

        private void button6_Click(object sender, EventArgs e)
        {
            screen.Text = screen.Text + "6";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            screen.Text = screen.Text + "7";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            screen.Text = screen.Text + "8";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            screen.Text = screen.Text + "9";
        }

        private void button13_Click(object sender, EventArgs e)
        {
            screen.Text="";
            x = 0;
            y = 0;
            choice = 0;
        }

        private void button12_Click(object sender, EventArgs e)
        {
            x = int.Parse(screen.Text);
            screen.Text = "";
            choice = 2;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            x = int.Parse(screen.Text);
            screen.Text = "";
            choice = 4;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            screen.Text = screen.Text + "0";
        }
    }
}
