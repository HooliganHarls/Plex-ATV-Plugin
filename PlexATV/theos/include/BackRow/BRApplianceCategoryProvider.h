/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceCategoryProvider : NSObject <BRProvider> {
@private
	NSArray *_categories;	// 4 = 0x4
}
@property(retain) NSArray *categories;	// G=0x3159c84d; S=0x31599975; converted property
// converted property getter: - (id)categories;	// 0x3159c84d
- (long)categoryIndexForIdentifier:(id)identifier;	// 0x3159cba9
- (id)controlFactory;	// 0x315dbee1
- (id)dataAtIndex:(long)index;	// 0x315dbea1
- (long)dataCount;	// 0x315dbec1
- (void)dealloc;	// 0x315dbf01
- (long)defaultCategoryIndex;	// 0x31599a5d
- (id)hashForDataAtIndex:(long)index;	// 0x315dbe71
// converted property setter: - (void)setCategories:(id)categories;	// 0x31599975
@end

