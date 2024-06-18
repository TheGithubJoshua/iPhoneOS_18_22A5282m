@class SUDownloadOptions, SUDescriptor, SUDownloadMetadata, SUOperationProgress;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUDescriptor *descriptor;
@property (retain, nonatomic) SUOperationProgress *progress;
@property (retain, nonatomic) SUDownloadOptions *downloadOptions;
@property (retain, nonatomic) SUDownloadMetadata *metadata;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)totalSpaceConsumed;
- (BOOL)isValidDownload;
- (BOOL)allowCellularDownload;

@end
