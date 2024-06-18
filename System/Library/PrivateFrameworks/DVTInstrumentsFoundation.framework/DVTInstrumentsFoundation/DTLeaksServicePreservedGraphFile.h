@class NSDictionary;

@interface DTLeaksServicePreservedGraphFile : NSObject

@property (nonatomic) int fd;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long token;
@property (copy, nonatomic) NSDictionary *metaDict;

- (void).cxx_destruct;
- (void)dealloc;

@end
