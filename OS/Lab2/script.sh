#!/bin/bash
date
current_time=$(date +%s)
echo "$current_time"
let current_time=current_time*2
echo "$current_time"
for i in {1..20}; do
echo "Number: $i"
done
