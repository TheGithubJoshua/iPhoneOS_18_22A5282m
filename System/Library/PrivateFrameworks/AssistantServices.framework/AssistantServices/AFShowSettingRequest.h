@interface AFShowSettingRequest : AFSiriRequest {
    long long _settingType;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithSettingType:(long long)a0;
- (id)createResponse;
- (long long)settingType;

@end
