#!/bin/bash

start_date="2025-05-12"
end_date=$(date -d "yesterday" +%Y-%m-%d)

current_date="$start_date"

while [[ "$current_date" < "$end_date" || "$current_date" == "$end_date" ]]; do
  echo "Processing date: $current_date"
  curl -X POST "http://localhost:3000/api/tasks/generate_plant_metrics?date=$current_date&metric=safety_stock_quantity"
  echo ""  # Add a newline for readability
  current_date=$(date -I -d "$current_date + 1 day")
done
