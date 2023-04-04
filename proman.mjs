#! /usr/bin/env node

import { program } from 'commander'

program
    .command('help')
    .description('Lists all commands')
    .action(RunHelp)