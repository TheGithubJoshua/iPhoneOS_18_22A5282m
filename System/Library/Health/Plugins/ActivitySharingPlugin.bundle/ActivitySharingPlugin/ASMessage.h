@class NSData, NSString;

@interface ASMessage : NSObject

@property (retain, nonatomic) NSData *payload;
@property (nonatomic) long long retryCount;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) id /* block */ ephemeralCompletionBlock;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
