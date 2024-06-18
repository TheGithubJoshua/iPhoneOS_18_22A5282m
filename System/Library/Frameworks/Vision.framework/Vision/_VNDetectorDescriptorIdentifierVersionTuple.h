@class NSString, VNResourceVersion;

@interface _VNDetectorDescriptorIdentifierVersionTuple : NSObject {
    NSString *_descriptorIdentifier;
    Class _detectorClass;
    VNResourceVersion *_descriptorVersion;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
