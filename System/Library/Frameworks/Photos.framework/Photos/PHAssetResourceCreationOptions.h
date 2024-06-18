@class NSString, NSDate;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (nonatomic) BOOL shouldIngestInPlace;
@property (nonatomic) int burstPickType;
@property (retain, nonatomic) NSString *forcePairingIdentifier;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (nonatomic) BOOL shouldMoveFile;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)a0;
- (BOOL)ensureOptionsAreCompleteForURL:(id)a0;

@end
