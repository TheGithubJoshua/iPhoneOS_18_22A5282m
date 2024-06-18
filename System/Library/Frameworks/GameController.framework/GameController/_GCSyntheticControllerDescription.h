@class NSString;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface _GCSyntheticControllerDescription : NSObject <_GCSyntheticDeviceDescription>

@property (readonly) id<NSCopying, NSObject, NSSecureCoding> controllerIdentifier;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqualToDescription:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 controllerIdentifier:(id)a1;

@end
