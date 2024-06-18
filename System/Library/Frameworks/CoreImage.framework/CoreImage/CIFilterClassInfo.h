@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (id)classInfoForClass:(Class)a0;

- (id)init;
- (id)outputKeys;
- (id)initWithClass:(Class)a0;
- (id)description;
- (void)dealloc;
- (id)inputKeys;
- (id)inputClasses;

@end
