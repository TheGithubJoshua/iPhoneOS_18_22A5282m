@interface EXConditionalFormattingRule : NSObject

+ (id)conditionalFormattingRuleTypeEnumMap;
+ (int)edOperatorFromXmlOperatorString:(id)a0;
+ (int)edRuleTypeFromXmlRuleTypeString:(id)a0;
+ (int)edTimePeriodFromXmlTimePeriodString:(id)a0;
+ (id)operatorStringEnumMap;
+ (void)readFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 x14:(BOOL)a1 edConditionalFormatting:(id)a2 edReference:(id)a3 state:(id)a4;
+ (id)timePeriodEnumMap;

@end