//
//  ROKOInstaBotUISchemesEnums.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 30/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#ifndef ROKOInstaBotUISchemesEnums_h
#define ROKOInstaBotUISchemesEnums_h

typedef NS_ENUM(NSInteger, ROKOInstaBotBackgroundImageRepeatMode) {
    ROKOInstaBotBackgroundImageRepeatModeNoRepeat = 0,
    ROKOInstaBotBackgroundImageRepeatModeRepeat
};


typedef NS_ENUM(NSInteger, ROKOInstaBotBackgroundImagePosition) {
    ROKOInstaBotBackgroundImagePositionCenter = 0,
    ROKOInstaBotBackgroundImagePositionTop,
    ROKOInstaBotBackgroundImagePositionLeft,
    ROKOInstaBotBackgroundImagePositionBottom,
    ROKOInstaBotBackgroundImagePositionRight
};

typedef NS_ENUM(NSInteger, ROKOFontStyle) {
    ROKOFontStyleBold = 0,
    ROKOFontStyleItalic,
    ROKOFontStyleUnderlined,
    ROKOFontStyleStrikethrough,
    ROKOFontStyleNone
};


#endif /* ROKOInstaBotUISchemesEnums_h */
