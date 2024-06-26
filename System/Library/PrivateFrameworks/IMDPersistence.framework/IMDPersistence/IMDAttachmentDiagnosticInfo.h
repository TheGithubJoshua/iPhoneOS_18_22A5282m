@class NSString;

@interface IMDAttachmentDiagnosticInfo : NSObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *originalGUID;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long total_bytes;
@property (nonatomic) long long ck_sync_state;
@property (nonatomic) long long transfer_state;
@property (nonatomic) unsigned long long hide_attachment;

- (void).cxx_destruct;
- (id)description;

@end
