@class NSString, DOMHTMLFormElement;

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property BOOL autofocus;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *name;
@property BOOL readOnly;
@property int rows;
@property int cols;
@property (readonly, copy) NSString *type;
@property (copy) NSString *defaultValue;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;
@property int selectionStart;
@property int selectionEnd;
@property (copy) NSString *accessKey;

- (void)select;
- (id)placeholder;
- (void)setPlaceholder:(id)a0;
- (id)labels;
- (void)setMaxLength:(int)a0;
- (BOOL)required;
- (void)setRequired:(BOOL)a0;
- (int)maxLength;
- (unsigned int)textLength;
- (int)_autocapitalizeType;
- (BOOL)_isEdited;
- (id)endPosition;
- (void)setCanShowPlaceholder:(BOOL)a0;
- (id)startPosition;
- (void)setWrap:(id)a0;
- (id)wrap;
- (id)dirName;
- (id)autocomplete;
- (BOOL)canShowPlaceholder;
- (id)selectionDirection;
- (void)setAutocomplete:(id)a0;
- (void)setDirName:(id)a0;
- (void)setRangeText:(id)a0;
- (void)setRangeText:(id)a0 start:(unsigned int)a1 end:(unsigned int)a2 selectionMode:(id)a3;
- (void)setSelectionDirection:(id)a0;
- (void)setSelectionRange:(int)a0 end:(int)a1;
- (int)structuralComplexityContribution;

@end
