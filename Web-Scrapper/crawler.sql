-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 24, 2021 at 10:13 PM
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
-- Database: `crawler`
--

-- --------------------------------------------------------

--
-- Table structure for table `webpage_details`
--

CREATE TABLE `webpage_details` (
  `id` int(11) NOT NULL,
  `link` varchar(1024) NOT NULL,
  `title` varchar(1024) NOT NULL,
  `description` varchar(1024) NOT NULL,
  `internal_link` varchar(1024) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `webpage_details`
--

INSERT INTO `webpage_details` (`id`, `link`, `title`, `description`, `internal_link`) VALUES
(2, 'https://github.com/', 'GitHub: Where the world builds software · GitHub', 'GitHub is where over 56 million developers shape the future of software, together. Contribute to the open source community, manage your Git repositories, review code like a pro, track bugs and features, power your CI/CD and DevOps workflows, and secure code before you commit it.', '#start-of-content,https://docs.github.com/articles/supported-browsers,https://github.com/,/join?ref_cta=Sign+up&ref_loc=header+logged+out&ref_page=%2F&source=header-home,/join_next?ref_cta=Sign+up&ref_loc=header+logged+out&ref_page=%2F&source=header-home,/features,/mobile,/features/actions,/features/codespaces,/features/packages,/features/security,/features/code-review/,/features/project-management/,/features/integrations,/sponsors,/customer-stories,/team,/enterprise,/explore,/topics,/collections,/trending,https://lab.github.com/,https://opensource.guide,https://github.com/readme,https://github.com/events,https://github.community,https://education.github.com,https://stars.github.com,/marketplace,/pricing,/pricing#feature-comparison,https://enterprise.github.com/contact,https://education.github.com,,,,,/login,/join?ref_cta=Sign+up&ref_loc=header+logged+out&ref_page=%2F&source=header-home,/join_next?ref_cta=Sign+up&ref_loc=header+logged+out&ref_page=%2F&source=header-home,https://enterprise.github.com/contact?r');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `webpage_details`
--
ALTER TABLE `webpage_details`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `webpage_details`
--
ALTER TABLE `webpage_details`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=12;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
