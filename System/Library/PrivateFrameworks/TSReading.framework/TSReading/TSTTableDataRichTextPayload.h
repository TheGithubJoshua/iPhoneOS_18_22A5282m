@class TSTRichTextPayload;

@interface TSTTableDataRichTextPayload : TSTTableDataObject {
    TSTRichTextPayload *mPayload;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initObjectWithRichTextPayload:(id)a0;

@end
