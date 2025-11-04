import json

MAX_X = 18.41666666666667
MAX_Y = 5.666666666666667


def remap(
    old_val: float, old_min: float, old_max: float, new_min: float, new_max: float
):
    return (new_max - new_min) * (old_val - old_min) / (old_max - old_min) + new_min


with open("keyboard.json", "r") as f:
    data = json.load(f)

    keys = data["layouts"]["LAYOUT"]["layout"]

    for key in keys:
        x = key["x"]
        y = key["y"]

        if "w" in key:
            x += key["w"] / 2 - 0.5

        if "h" in key:
            y += key["h"] / 2 - 0.5

        x = remap(x, 0, MAX_X, 0, 224)
        y = remap(y, 0, MAX_Y, 0, 64)

        x = round(x)
        y = round(y)

        print(f"{{{x}, {y}}},")
