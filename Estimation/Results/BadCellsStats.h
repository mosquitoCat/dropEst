#pragma once

#include <RInside.h>
#include <boost/unordered_map.hpp>
#include <string>

namespace Estimation
{
	class Stats;
	namespace Results
	{
		class BadCellsStats
		{
		public:
			typedef boost::unordered_map<std::string, int> s_cnt_t;
			typedef boost::unordered_map<std::string, s_cnt_t> ss_cnt_t;

		private:
			ss_cnt_t genes_reads;
			ss_cnt_t genes_umis;
			std::vector<std::string> excluded_cells;

		public:

			void save_rds(const Stats &stats, const std::string &filename) const;

			BadCellsStats(const ss_cnt_t &genes_reads, const ss_cnt_t &genes_umis,
			              const std::vector<std::string> &excluded_cells);
		};
	}
}