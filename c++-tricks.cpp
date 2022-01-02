// Problem with pair of 

unordered_map<int, vector<long long> > locations;
// ...
// initiate locations map
// ...

// this works fine. Output content of locations as a pair of objects
{
for(auto & location:locations) 
    cout << location.first << ": " ;
    for(auto & loc : location.second)
        cout << loc << " ";
    cout << endl;
}

//do some computation with the map
for(auto& location: locations)
{
    int n = location.second.size();
    for(int i = 0; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            cout << distances[location.second[i]] << " " << distances[location.second[j]]  << endl; // outputs zeros!!!
            if (i != j) 
              distances[location.second[i]] += abs(distances[location.second[i]] - distances[location.second[j]]);
        }
    }
}
