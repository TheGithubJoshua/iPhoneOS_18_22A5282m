@class STWeatherAttributes, STCity;

@interface STShowWeatherConditionsRequest : AFSiriRequest {
    STWeatherAttributes *_attributes;
    STCity *_city;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)attributes;
- (id)city;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createResponse;
- (id)_initWithAttributes:(id)a0 city:(id)a1;

@end
