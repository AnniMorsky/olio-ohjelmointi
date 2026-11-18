```mermaid
classDiagram
    class Chef {
        # string name
        + Chef(string name)
        + ~Chef()
        + makeSalad() void
        + makeSoup()
    }

    class ItalianChef {
        + ItalianChef(string name)
        + ~ItalianChef()
        + getName() string
        + makeSoup() void
    }

    Chef <|-- ItalianChef : perii


    