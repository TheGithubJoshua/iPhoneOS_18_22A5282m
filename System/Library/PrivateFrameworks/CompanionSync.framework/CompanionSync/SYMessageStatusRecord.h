@class NSString;

@interface SYMessageStatusRecord : NSObject

@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) BOOL deviceACKReceived;
@property (nonatomic) BOOL applicationACKReceived;
@property (nonatomic) BOOL responseReceived;
@property (readonly, nonatomic) BOOL isComplete;

- (id)initWithMessageID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initFiller;

@end
