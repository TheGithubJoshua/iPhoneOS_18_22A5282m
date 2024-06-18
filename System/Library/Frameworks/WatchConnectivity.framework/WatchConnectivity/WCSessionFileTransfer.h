@class NSString, NSProgress, NSError, NSDate, WCSessionFile;

@interface WCSessionFileTransfer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *transferDate;
@property (copy) NSString *transferIdentifier;
@property (nonatomic, getter=isTransferring) BOOL transferring;
@property (retain) NSError *transferError;
@property (retain) NSProgress *internalProgress;
@property (retain) id progressToken;
@property (readonly, nonatomic) WCSessionFile *file;
@property (readonly, nonatomic) NSProgress *progress;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)cancel;
- (long long)compare:(id)a0;
- (id)initWithFile:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)initializeProgress;

@end