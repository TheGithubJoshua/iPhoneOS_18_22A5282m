@class NSString, NSDictionary, NSURL, NSDate;

@interface IMSPIAttachment : NSObject

@property (retain) NSString *guid;
@property (retain) NSURL *fileUrl;
@property long long fileTransferState;
@property (retain) NSString *uti;
@property BOOL isSticker;
@property BOOL isOutgoing;
@property (retain) NSDictionary *attributionInfo;
@property (readonly) NSDate *creationDate;

- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
- (id)initWithGuid:(id)a0 fileUrl:(id)a1 transferState:(long long)a2 uti:(id)a3 isSticker:(BOOL)a4 isOutgoing:(BOOL)a5 attributionInfo:(id)a6 creationDate:(id)a7;

@end
