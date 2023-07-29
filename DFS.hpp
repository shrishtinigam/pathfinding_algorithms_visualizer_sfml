#pragma once

bool dfs_search(unsigned short& i_path_length, unsigned short& i_total_checks, std::chrono::microseconds& i_duration, std::map<gbl::Position<>, gbl::Position<>>& i_previous_cell, std::stack<gbl::Position<>>& i_path_stack, gbl::Map<float>& i_distances, const gbl::Position<>& i_finish_position, const gbl::Position<>& i_start_position, gbl::Map<>& i_map);

void dfs_reset(bool& i_finished, unsigned short& i_path_length, unsigned short& i_total_checks, std::chrono::microseconds& i_duration, std::map<gbl::Position<>, gbl::Position<>>& i_previous_cell, std::stack<gbl::Position<>>& i_path_stack, gbl::Map<float>& i_distances, const gbl::Position<>& i_start_position, gbl::Map<>& i_map);