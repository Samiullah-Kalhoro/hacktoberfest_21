-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 17, 2021 at 07:50 AM
-- Server version: 10.4.16-MariaDB
-- PHP Version: 7.4.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `lms`
--

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

CREATE TABLE `admin` (
  `id` int(11) NOT NULL,
  `username` varchar(200) NOT NULL,
  `password` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`id`, `username`, `password`) VALUES
(1, 'admin', '123456');

-- --------------------------------------------------------

--
-- Table structure for table `category`
--

CREATE TABLE `category` (
  `id` int(10) NOT NULL,
  `question` varchar(255) NOT NULL,
  `answer` varchar(255) NOT NULL,
  `a` varchar(200) NOT NULL,
  `b` varchar(255) NOT NULL,
  `c` varchar(255) NOT NULL,
  `d` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `category`
--

INSERT INTO `category` (`id`, `question`, `answer`, `a`, `b`, `c`, `d`) VALUES
(1, 'AOOP stands for?', 'C', 'Advance Operating ', 'Aloo Operating', 'Advance OOP', 'None'),
(2, 'DAO stands for?', 'A', 'Digital Aloo', 'None', 'No idea', 'Both b & c'),
(3, 'Do you like AOOP?', 'D', 'Yes', 'No', 'Tobah Tobah', 'Allah Reham'),
(4, 'JAVA is a?', 'B', 'Vegetable', 'Fruit', 'Programming Language', 'None'),
(5, 'Are you a good boy?', 'D', 'No', 'Yes', 'Allah knows best', 'Skip'),
(6, 'Do you like moustache?', 'C', 'Little', 'Nope', 'Yes', 'I don\'t care');

-- --------------------------------------------------------

--
-- Table structure for table `result`
--

CREATE TABLE `result` (
  `id` int(11) NOT NULL,
  `name` varchar(200) NOT NULL,
  `total_marks` int(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `result`
--

INSERT INTO `result` (`id`, `name`, `total_marks`) VALUES
(13, 'Abdullah', 3);

-- --------------------------------------------------------

--
-- Table structure for table `review`
--

CREATE TABLE `review` (
  `name` varchar(200) NOT NULL,
  `question` int(255) DEFAULT NULL,
  `answer` varchar(255) DEFAULT NULL,
  `mark` varchar(200) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `review`
--

INSERT INTO `review` (`name`, `question`, `answer`, `mark`) VALUES
('tayyab', 1, 'A', '0'),
('tayyab', 2, 'B', '5'),
('tayyab', 3, 'D', '0'),
('hadi', 1, 'B', '1'),
('hadi', 2, 'A', '0'),
('hadi', 3, 'D', '0'),
('faik', 1, 'B', '1'),
('faik', 2, 'C', '0'),
('faik', 3, 'C', '1'),
('Hadi', 2, 'A', '0'),
('Hadi', 2, 'C', '0'),
('Hadi', 3, 'A', '0'),
('hadi', 1, 'A', '0'),
('droopy', 1, 'D', '1'),
('droopy', 2, 'D', '1'),
('droopy', 3, 'D', '1'),
('KALA', 1, 'D', '0'),
('KALA', 1, 'D', '1'),
('KALA', 2, 'D', '1'),
('KALA', 3, 'D', '1'),
('Abdullah', 1, 'C', '1'),
('Abdullah', 2, 'A', '1'),
('Abdullah', 3, 'D', '1');

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `id` int(11) NOT NULL,
  `name` varchar(200) NOT NULL,
  `department` varchar(255) NOT NULL,
  `username` varchar(255) NOT NULL,
  `password` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`id`, `name`, `department`, `username`, `password`) VALUES
(10, 'Abdullah', 'Computer Science', 'ABD', 'spartacus');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admin`
--
ALTER TABLE `admin`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `category`
--
ALTER TABLE `category`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `result`
--
ALTER TABLE `result`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `admin`
--
ALTER TABLE `admin`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `result`
--
ALTER TABLE `result`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=14;

--
-- AUTO_INCREMENT for table `student`
--
ALTER TABLE `student`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
