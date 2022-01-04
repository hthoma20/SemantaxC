#!/bin/bash

sed 's/REMOTE_DEBUG=.*/REMOTE_DEBUG='$1'/' ./smtxc.sh -i
