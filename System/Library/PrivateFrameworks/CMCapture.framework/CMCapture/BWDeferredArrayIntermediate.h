@class NSArray;

@interface BWDeferredArrayIntermediate : BWDeferredDataIntermediate

@property (readonly, nonatomic) NSArray *array;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (int)flush;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)archive:(int *)a0;
- (int)setArchive:(id)a0;
- (id)fetchWithCustomClassesAndRetain:(id)a0 err:(int *)a1;
- (id)initWithArray:(id)a0 tag:(id)a1 URL:(id)a2;
- (int)setURL:(id)a0 prefetchQueue:(id)a1;

@end