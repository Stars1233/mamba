// Copyright (c) 2019, QuantStack and Mamba Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef UMAMBA_CONFIG_HPP
#define UMAMBA_CONFIG_HPP

#include "mamba/context.hpp"

#ifdef VENDORED_CLI11
#include "mamba/CLI.hpp"
#else
#include <CLI/CLI.hpp>
#endif

void
init_config_parser(CLI::App* subcom);

void
init_config_list_parser(CLI::App* subcom);

void
set_config_list_command(CLI::App* subcom);

void
set_config_sources_command(CLI::App* subcom);

void
set_config_command(CLI::App* subcom);

#endif
