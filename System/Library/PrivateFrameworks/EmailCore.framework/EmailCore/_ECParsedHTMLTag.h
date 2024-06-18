@class NSString;

@interface _ECParsedHTMLTag : _ECParsedHTMLNode {
    NSString *_tagName;
}

- (id)description;
- (void)dealloc;
- (id)tagName;
- (void)setTagName:(id)a0;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;

@end
