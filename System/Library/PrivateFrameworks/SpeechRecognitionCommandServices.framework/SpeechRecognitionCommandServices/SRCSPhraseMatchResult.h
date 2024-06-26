@class NSString;
@protocol SRCSTextMarkerRangeProtocol;

@interface SRCSPhraseMatchResult : NSObject

@property (retain) id userInfo;
@property (readonly) NSString *matchedString;
@property (readonly) id<SRCSTextMarkerRangeProtocol> markerRange;

- (long long)location;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMarkerRange:(id)a0 matchedString:(id)a1 userInfo:(id)a2;

@end
