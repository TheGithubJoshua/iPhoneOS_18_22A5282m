@class NSString;

@interface ADFrequencyCap : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *adMetadata;
@property (nonatomic) long long downloadType;
@property (nonatomic) double setTime;

- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)splitCapData:(id)a0;

@end
