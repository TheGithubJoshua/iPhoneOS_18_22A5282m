@class NSString;

@interface PLPhotoLibraryPathManagerIdentifier : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned char bundleFormat;

- (id)initWithPathManager:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPathManagerIdentifier:(id)a0;
- (id)initWithLibraryID:(id)a0 libraryFormat:(unsigned char)a1;

@end
