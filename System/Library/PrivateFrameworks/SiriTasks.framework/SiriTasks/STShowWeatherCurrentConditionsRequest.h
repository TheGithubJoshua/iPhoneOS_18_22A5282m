@class STWeatherCurrentConditions, STCity, STWeatherUnits;

@interface STShowWeatherCurrentConditionsRequest : AFSiriRequest {
    STWeatherCurrentConditions *_currentConditions;
    STCity *_city;
    STWeatherUnits *_units;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)units;
- (id)city;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)currentConditions;
- (id)createResponse;
- (id)_initWithCurrentConditions:(id)a0 city:(id)a1 units:(id)a2;

@end
