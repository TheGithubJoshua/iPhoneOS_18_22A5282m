@class NSNumber, NSMutableDictionary, NSDate;

@interface CRKURLResources : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSMutableDictionary *resources;
@property (readonly, nonatomic, getter=isDirectory) NSNumber *directory;
@property (readonly, copy, nonatomic) NSNumber *documentIdentifier;
@property (readonly, nonatomic) NSDate *lastModificationDate;
@property (readonly, nonatomic) unsigned long long size;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResources:(id)a0;
- (id)immutableResources;
- (id)mutableResources;
- (id)underlyingResources;

@end
