@class NSArray, BRFileObjectID;

@interface BRProgressUpdate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) BRFileObjectID *folderID;
@property (nonatomic) unsigned long long uploadCompletedSize;
@property (nonatomic) unsigned long long uploadTotalSize;
@property (nonatomic) unsigned long long downloadCompletedSize;
@property (nonatomic) unsigned long long downloadTotalSize;
@property (copy, nonatomic) NSArray *parentFileIDs;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
