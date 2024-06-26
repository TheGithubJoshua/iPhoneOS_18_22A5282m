@class NSString, NSAttributedString, NSDate;

@interface IMMessagePartHistoricalContent : NSObject

@property (retain, nonatomic) NSAttributedString *messagePartText;
@property (retain, nonatomic) NSDate *dateSent;
@property (retain, nonatomic) NSString *backwardCompatibleMessageGUID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMessagePartText:(id)a0 dateSent:(id)a1 backwardCompatibleMessageGUID:(id)a2;
- (id)initWithMessageSummaryInfoDictionary:(id)a0;
- (id)messageSummaryInfoDictionaryRepresentation;

@end
