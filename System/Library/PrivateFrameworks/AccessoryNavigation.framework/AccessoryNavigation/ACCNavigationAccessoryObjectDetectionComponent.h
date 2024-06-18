@class NSString, NSArray;

@interface ACCNavigationAccessoryObjectDetectionComponent : NSObject

@property unsigned long long identifier;
@property (retain) NSString *name;
@property BOOL isEnabled;
@property (retain) NSArray *supportedTypes;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end