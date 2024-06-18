@class NBObjCHashBucketer;

@interface NBHashBucketer : NSObject

@property (readonly, nonatomic) NBObjCHashBucketer *bucketer;

- (id)init;
- (unsigned long long)bucketForHash:(id)a0 bucketCount:(unsigned long long)a1;
- (void).cxx_destruct;

@end
