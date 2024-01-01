# UMN_Simulation
This is a simulation of the University of Minnesota campus. Routes are attached to the map. Objects can be created and routed to a destination. There is a drone delivery system within this simulation. Users can schedule package deliveries. There are also other objects and interaction in the simulation and additional features can be added easily.

# Build and Run
```
  # Build the project
  make -j
  
  # Run the project (./build/web-app <port> <web folder>)
  ./build/bin/transit_service 8081 apps/transit_service/web/
```

# Visualization

In a web browser, navigate to http://127.0.0.1:8081 and you should see a visualization. 
Note: You may not be able to bind to the port. If you started the transit_service with a different port, you will need to change the link to that port.

Navigate to http://127.0.0.1:8081/schedule.html and you should see a page to schedule the delivery.
