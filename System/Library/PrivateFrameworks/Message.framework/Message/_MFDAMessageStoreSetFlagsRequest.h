@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest>

@property (readonly, nonatomic) BOOL shouldSend;
@property (readonly, nonatomic) BOOL isUserRequested;

- (unsigned long long)generationNumber;

@end