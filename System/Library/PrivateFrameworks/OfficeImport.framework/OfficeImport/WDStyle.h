@class NSString, WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDStyleSheet, WDTableStyleOverride;

@interface WDStyle : NSObject <NSCopying> {
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellProperties;
    WDTableStyleOverride *mTableStyleOverrides[12];
    BOOL mHidden;
    NSString *mName;
    NSString *mId;
    int mStyleType;
}

@property (readonly, weak) WDStyleSheet *styleSheet;
@property (weak) WDStyle *baseStyle;
@property (weak) WDStyle *nextStyle;

- (id)id;
- (id)name;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hidden;
- (void)setName:(id)a0;
- (int)type;
- (void)setHidden:(BOOL)a0;
- (id)paragraphProperties;
- (id)tableProperties;
- (id)characterProperties;
- (id)initWithStyleSheet:(id)a0 id:(id)a1 type:(int)a2;
- (BOOL)isAnythingOverridden;
- (id)tableCellProperties;
- (id)tableRowProperties;
- (id)tableStyleOverrideForPart:(int)a0;

@end
