@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)description;
- (void)clearProperties;
- (id)initWithParagraph:(id)a0;
- (int)runType;

@end
