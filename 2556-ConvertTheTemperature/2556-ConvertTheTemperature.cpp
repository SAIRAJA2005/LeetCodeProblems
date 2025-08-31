// Last updated: 01/09/2025, 00:59:30
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin,fahren;
        kelvin = celsius+273.15;
        fahren=celsius*1.80+32.00;
        cout<<fixed<<setprecision(5);
        vector<double>vec;
        vec.push_back(kelvin);
        vec.push_back(fahren);
        return vec;
    }
};