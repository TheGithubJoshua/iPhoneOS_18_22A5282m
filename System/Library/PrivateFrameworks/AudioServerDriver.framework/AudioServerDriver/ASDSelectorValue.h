@class NSString;

@interface ASDSelectorValue : NSObject

@property (nonatomic) unsigned int value;
@property (copy, nonatomic) NSString *name;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
