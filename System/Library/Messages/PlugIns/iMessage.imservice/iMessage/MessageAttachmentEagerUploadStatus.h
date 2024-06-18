@class NSString, MessageAttachmentSingleStatus, NSURL, NSArray, NSObject;
@protocol OS_dispatch_group;

@interface MessageAttachmentEagerUploadStatus : NSObject {
    long long _waitCount;
    NSObject<OS_dispatch_group> *_uploadGroup;
}

@property long long state;
@property (retain) MessageAttachmentSingleStatus *attachmentStatus;
@property (readonly, retain) NSURL *originalURL;
@property (copy) NSString *transferredName;
@property (readonly, retain) NSString *transferId;
@property (readonly) long long targetSize;
@property (copy) NSArray *attachmentSendContexts;
@property unsigned long long totalBytes;
@property (readonly) long long useCount;
@property (readonly) double expiration;

- (BOOL)isComplete;
- (void)finish;
- (BOOL)cancel;
- (BOOL)isCanceled;
- (void)start;
- (void).cxx_destruct;
- (id)description;
- (void)wait:(id /* block */)a0;
- (BOOL)isSuccess;
- (void)incrementUseCount;
- (void)attachToTransfer:(id)a0 messageGUID:(id)a1;
- (id)initWithOriginalURL:(id)a0 transferId:(id)a1 targetSize:(long long)a2;

@end