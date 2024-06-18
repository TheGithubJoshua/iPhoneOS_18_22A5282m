@class NSURL, NSSet;

@interface SKMountParams : NSObject <NSCopying>

@property (nonatomic) BOOL recursive;
@property (nonatomic) BOOL force;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL noBrowse;
@property (copy, nonatomic) NSURL *mountPoint;
@property (retain, nonatomic) NSSet *allParams;

- (id)init;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParams:(id)a0;

@end
