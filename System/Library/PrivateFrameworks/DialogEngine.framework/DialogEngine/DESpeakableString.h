@class NSString;

@interface DESpeakableString : NSObject

@property void *This;
@property (retain) NSString *print;
@property (retain) NSString *speak;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithPrint:(id)a0 speak:(id)a1;

@end
