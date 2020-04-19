#include <string>


class Device{

    private:
        int device_id;
	std::string device_location;
        std::string device_brand;
	std::string device_model; 

    public:
	int getDeviceId();
	void setDeviceId(int id);

	std::string getDeviceLocation();
	void getDeviceLocation(std::string location);

	std::string getDeviceBrand();
	void setDeviceBranc(std::string brand);

	std::string getDeviceModel();
	void setDeviceModel(std::string model);
};
