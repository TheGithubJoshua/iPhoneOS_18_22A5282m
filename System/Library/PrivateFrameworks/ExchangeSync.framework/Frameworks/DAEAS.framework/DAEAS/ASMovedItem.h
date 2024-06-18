@class NSString, NSNumber;

@interface ASMovedItem : ASItem {
    NSString *_srcMsgId;
    NSNumber *_status;
    NSString *_dstMsgId;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)setStatus:(id)a0;
- (void).cxx_destruct;
- (id)status;
- (id)dstMsgId;
- (void)setDstMsgId:(id)a0;
- (void)setSrcMsgId:(id)a0;
- (id)srcMsgId;

@end
