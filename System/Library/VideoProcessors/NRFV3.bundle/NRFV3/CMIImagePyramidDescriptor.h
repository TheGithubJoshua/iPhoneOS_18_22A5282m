@interface CMIImagePyramidDescriptor : NSObject

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long levelCount;
@property (nonatomic) unsigned long long type;

- (id)init;
- (BOOL)isValid;
- (BOOL)_isValidWithLogError:(BOOL)a0;

@end
