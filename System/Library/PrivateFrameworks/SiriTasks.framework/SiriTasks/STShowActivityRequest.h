@interface STShowActivityRequest : AFSiriRequest {
    long long _dataType;
    long long _view;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)view;
- (long long)dataType;
- (void)encodeWithCoder:(id)a0;
- (id)createResponse;
- (id)_initWithDataType:(long long)a0 view:(long long)a1;

@end
